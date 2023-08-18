
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::AirLassoHang_main(L2CFighterPfushigisou *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_NOT_ARM);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_Y);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_BODY_FLIP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,0x15af703857);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  iVar1 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x563e7b6aa);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PFUSHIGISOU_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

