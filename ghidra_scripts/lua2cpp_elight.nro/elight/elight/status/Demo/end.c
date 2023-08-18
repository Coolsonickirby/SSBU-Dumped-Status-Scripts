
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterElight::status::Demo_end(L2CFighterElight *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Demo(this);
  lib::L2CValue::_L2CValue(aLStack80);
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0x70fca6010);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc60ad9c26);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x796c331aa);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xce639ee88);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) goto LAB_7100016758;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELIGHT_GENERATE_ARTICLE_DIVER);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100016758:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

