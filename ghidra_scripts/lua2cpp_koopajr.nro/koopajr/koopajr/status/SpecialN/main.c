
void __thiscall
L2CFighterKoopajr::status::SpecialN_main(L2CFighterKoopajr *this,L2CValue *return_value)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x41f1b251e);
  lib::L2CValue::L2CValue(aLStack80,0xbccd6aa48);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xaefe46b4c);
  lib::L2CValue::L2CValue(aLStack80,0x15c83a2867);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

