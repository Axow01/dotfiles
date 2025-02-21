return {
    "catppuccin/nvim",
    name = "catppucchin",
    priority = 1000,
    config = function()
        require('catppuccin').setup()
        vim.cmd.colorscheme "catppuccin"
    end
}

