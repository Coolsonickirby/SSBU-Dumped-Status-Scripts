
void __thiscall
L2CFighterSamusd::status::ReboundStop_main(L2CFighterSamusd *this,L2CValue *return_value)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x4dba80bb2);
  lib::L2CValue::L2CValue(aLStack80,0xbb499cbe2);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_ReboundStop_common(this);
  lib::L2CValue::L2CValue(aLStack64,ReboundStop_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

