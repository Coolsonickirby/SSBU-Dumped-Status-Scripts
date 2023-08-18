
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRichter::status::SpecialLw_end(L2CFighterRichter *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_ITEM_KIND_SIMONHOLYWATER);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_ITEM_KIND_RICHTERHOLYWATER);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) goto LAB_7100011ed0;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SIMON_GENERATE_ARTICLE_HOLYWATER);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100011ed0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

