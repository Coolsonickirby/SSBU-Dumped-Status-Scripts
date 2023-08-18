
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::AirLassoHang_main(L2CFighterShizue *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x59d29c68e);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHIZUE_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack128,0x5eb263e0d);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar3 = lib::L2CValue::operator__(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_BODY_FLIP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

