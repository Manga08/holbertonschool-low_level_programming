# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH="/home/manga/.oh-my-zsh"

#=============================================
#==================Beauty=====================
#=============================================
ZSH_THEME="powerlevel10k/powerlevel10k"

POWERLEVEL9K_MODE="nerdfont-complete"

zsh_wifi_signal(){
if [ "$airport" = "Off" ]; then
    local color='%F{black}'
    echo -n "%{$color%}Wifi Off"
else
    local ssid=$(echo $output | grep ' SSID' | awk -F': ' '{print $2}')
    local speed=$(echo $output | grep 'lastTxRate' | awk -F': ' '{print $2}')
    local color='%F{black}'

    [[ $speed -gt 100 ]] && color='%F{black}'
    [[ $speed -lt 50 ]] && color='%F{red}'

    echo -n "%{$color%}$ssid %{$color%}\uf1eb%{%f%}" # removed char not in my PowerLine font
fi
}

POWERLEVEL9K_CUSTOM_WIFI_SIGNAL="zsh_wifi_signal"
POWERLEVEL9K_CUSTOM_WIFI_SIGNAL_BACKGROUND="white"
POWERLEVEL9K_CUSTOM_WIFI_SIGNAL_FOREGROUND="black"

POWERLEVEL9K_CONTEXT_TEMPLATE='%n'
POWERLEVEL9K_CONTEXT_DEFAULT_FOREGROUND='white'
POWERLEVEL9K_BATTERY_CHARGING='yellow'
POWERLEVEL9K_BATTERY_CHARGED='green'
POWERLEVEL9K_BATTERY_DISCONNECTED='$DEFAULT_COLOR'
POWERLEVEL9K_BATTERY_LOW_THRESHOLD='10'
POWERLEVEL9K_BATTERY_LOW_COLOR='red'
POWERLEVEL9K_MULTILINE_FIRST_PROMPT_PREFIX=''
#POWERLEVEL9K_BATTERY_STAGES=($'\u2581 ' $'\u2582 ' $'\u2583 ' $'\u2584 ' $'\u2585 ' $'\u2586 ' $'\u2587 ' $'\u2588 ')
POWERLEVEL9K_BATTERY_ICON='\uf1e6 '
POWERLEVEL9K_PROMPT_ON_NEWLINE=true
#POWERLEVEL9K_MULTILINE_LAST_PROMPT_PREFIX="❱ "
POWERLEVEL9K_MULTILINE_LAST_PROMPT_PREFIX="%F{014}\u2570%F{cyan}\uF054%F{073}\uF054%F{109}\uF054%f "
POWERLEVEL9K_VCS_MODIFIED_BACKGROUND='yellow'
POWERLEVEL9K_VCS_UNTRACKED_BACKGROUND='yellow'
POWERLEVEL9K_VCS_UNTRACKED_ICON='?'

POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(os_icon context battery dir vcs)
POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(status time dir_writable ip vpn_ip custom_wifi_signal ram load background_jobs)

#POWERLEVEL9K_SHORTEN_STRATEGY="truncate_middle"
POWERLEVEL9K_SHORTEN_DIR_LENGTH=1

POWERLEVEL9K_TIME_FORMAT="%D{\uf017 %H:%M \uf073 %d/%m/%y}"
POWERLEVEL9K_TIME_BACKGROUND='white'
POWERLEVEL9K_RAM_BACKGROUND='yellow'
POWERLEVEL9K_LOAD_CRITICAL_BACKGROUND="white"
POWERLEVEL9K_LOAD_WARNING_BACKGROUND="white"
POWERLEVEL9K_LOAD_NORMAL_BACKGROUND="white"
POWERLEVEL9K_LOAD_CRITICAL_FOREGROUND="red"
POWERLEVEL9K_LOAD_WARNING_FOREGROUND="yellow"
POWERLEVEL9K_LOAD_NORMAL_FOREGROUND="black"
POWERLEVEL9K_LOAD_CRITICAL_VISUAL_IDENTIFIER_COLOR="red"
POWERLEVEL9K_LOAD_WARNING_VISUAL_IDENTIFIER_COLOR="yellow"
POWERLEVEL9K_LOAD_NORMAL_VISUAL_IDENTIFIER_COLOR="green"
POWERLEVEL9K_HOME_ICON=''
POWERLEVEL9K_HOME_SUB_ICON=''
POWERLEVEL9K_FOLDER_ICON=''
POWERLEVEL9K_STATUS_VERBOSE=true
POWERLEVEL9K_STATUS_CROSS=true
POWERLEVEL9K_TIME_ICON=""

#=============================================
#=================Commands====================
#=============================================

env=~/.ssh/agent.env

agent_load_env () { test -f "$env" && . "$env" >| /dev/null ; }

agent_start () {
    (umask 077; ssh-agent >| "$env")
    . "$env" >| /dev/null ; }

agent_load_env

# agent_run_state: 0=agent running w/ key; 1=agent w/o key; 2= agent not running
agent_run_state=$(ssh-add -l >| /dev/null 2>&1; echo $?)

if [ ! "$SSH_AUTH_SOCK" ] || [ $agent_run_state = 2 ]; then
    agent_start
    ssh-add
elif [ "$SSH_AUTH_SOCK" ] && [ $agent_run_state = 1 ]; then
    ssh-add
fi

unset env

if [[ "$OSTYPE" == "freebsd"* ]]; then
    POWERLEVEL9K_IGNORE_TERM_COLORS=true
fi

# zsh-syntax-highlighting
ZSH_HIGHLIGHT_HIGHLIGHTERS=(main brackets pattern cursor)
ZSH_HIGHLIGHT_PATTERNS+=('rm -rf *' 'fg=white,bold,bg=red')
typeset -A ZSH_HIGHLIGHT_STYLES
ZSH_HIGHLIGHT_STYLES[path]='fg=blue'
ZSH_HIGHLIGHT_STYLES[path_pathseparator]='fg=cyan'
ZSH_HIGHLIGHT_STYLES[alias]='fg=cyan'
ZSH_HIGHLIGHT_STYLES[builtin]='fg=cyan'
ZSH_HIGHLIGHT_STYLES[function]='fg=cyan'
ZSH_HIGHLIGHT_STYLES[commandseparator]='fg=yellow'
ZSH_HIGHLIGHT_STYLES[redirection]='fg=magenta'
ZSH_HIGHLIGHT_STYLES[bracket-level-1]='fg=cyan,bold'
ZSH_HIGHLIGHT_STYLES[bracket-level-2]='fg=green,bold'
ZSH_HIGHLIGHT_STYLES[bracket-level-3]='fg=magenta,bold'
ZSH_HIGHLIGHT_STYLES[bracket-level-4]='fg=yellow,bold'

if [[ ! -d "${ZPLUG_HOME}" ]]; then
    if [[ ! -d ~/.zplug ]]; then
	git clone https://github.com/zplug/zplug ~/.zplug
	# If we can't get zplug, it'll be a very sobering shell experience. To at
	# least complete the sourcing of this file, we'll define an always-false
	# returning zplug function.
	if [[ $? != 0 ]]; then
	    function zplug() {
		return 1
	    }
	fi
    fi
    export ZPLUG_HOME=~/.zplug
fi
if [[ -d "${ZPLUG_HOME}" ]]; then
    source "${ZPLUG_HOME}/init.zsh"
fi

zplug 'plugins/bundler', from:oh-my-zsh, if:'which bundle'
zplug 'plugins/colored-man-pages', from:oh-my-zsh
zplug 'plugins/completion', from:oh-my-zsh
zplug 'plugins/extract', from:oh-my-zsh
zplug 'plugins/fancy-ctrl-z', from:oh-my-zsh
zplug 'plugins/git', from:oh-my-zsh, if:'which git'
#zplug 'plugins/gpg-agent', from:oh-my-zsh, if:'which gpg-agent'
zplug 'plugins/httpie', from:oh-my-zsh, if:'which httpie'
zplug 'plugins/nanoc', from:oh-my-zsh, if:'which nanoc'
zplug 'plugins/nmap', from:oh-my-zsh, if:'which nmap'
zplug 'plugins/tmux', from:oh-my-zsh, if:'which tmux'

#zplug 'b4b4r07/enhancd', use:init.sh
zplug 'b4b4r07/zsh-vimode-visual', defer:3
zplug "junegunn/fzf-bin", as:command, from:gh-r, rename-to:"fzf", frozen:1
zplug "junegunn/fzf", use:"shell/key-bindings.zsh"
zplug 'knu/zsh-manydots-magic', use:manydots-magic, defer:3
zplug 'romkatv/powerlevel10k', use:powerlevel10k.zsh-theme
zplug 'seebi/dircolors-solarized', ignore:"*", as:plugin
zplug 'Tarrasch/zsh-bd'
zplug 'zsh-users/zsh-autosuggestions'
zplug 'zsh-users/zsh-completions', defer:2
zplug 'zsh-users/zsh-history-substring-search'
zplug 'zsh-users/zsh-syntax-highlighting', defer:2

if ! zplug check; then
    zplug install
fi

zplug load

if zplug check 'seebi/dircolors-solarized'; then
    if which gdircolors > /dev/null 2>&1; then
	alias dircolors='gdircolors'
    fi
    if which dircolors > /dev/null 2>&1; then
	scheme='dircolors.256dark'
	eval $(dircolors $ZPLUG_HOME/repos/seebi/dircolors-solarized/$scheme)
    fi
fi

if zplug check 'zsh-users/zsh-autosuggestions'; then
    # Enable asynchronous fetching of suggestions.
    ZSH_AUTOSUGGEST_USE_ASYNC=1
    # For some reason, the offered completion winds up having the same color as
    # the terminal background color (when using a dark profile). Therefore, we
    # switch to gray.
    # See https://github.com/zsh-users/zsh-autosuggestions/issues/182.
    ZSH_AUTOSUGGEST_HIGHLIGHT_STYLE='fg=gray'
fi

globalias() {
    # FIXME: the whitelist pattern should technically only be computed once, but
    # since it's cheap, we keep it local for now.
    local -a whitelist candidates
    whitelist=(ls git tmux)
    local pattern="^(${(j:|:)whitelist})"
    for k v in ${(kv)aliases}; do
	# We have a candidate unless the alias is an alias that begins with itself,
	# e.g., ls='ls --some-option'.
	if [[ $v =~ $pattern && ! $v =~ ^$k ]]; then
	    candidates+=($k)
	fi
    done
    if [[ $LBUFFER =~ "(^|[;|&])\s*(${(j:|:)candidates})\s*($|[;|&])" ]]; then
	zle _expand_alias
    fi
    zle self-insert
}
zle -N globalias
bindkey -M emacs ' ' globalias
bindkey -M viins ' ' globalias
bindkey -M isearch ' ' magic-space # normal space during searches

#==============================================
#==================Plugins=====================
#==============================================

ENABLE_CORRECTION="true"

plugins=(git
	 dnf
	 zsh-syntax-highlighting
	 zsh-autosuggestions
	)

source $ZSH/oh-my-zsh.sh

#==============================================
#==================Aliases=====================
#==============================================

alias gt='git status'

alias hippoproject='/home/manga/hipposcraper/hippoproject.py'
alias hipporead='/home/manga/hipposcraper/hipporead.py'
alias hipposcrape='/home/manga/hipposcraper/hipposcrape.sh'

#=============================================
#==================Others=====================
#=============================================

[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh

# opam configuration
test -r /home/manga/.opam/opam-init/init.zsh && . /home/manga/.opam/opam-init/init.zsh > /dev/null 2> /dev/null || true
