
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialNMaxShot_main(L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x12d4718488);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_INT_NEXT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x16590fd489);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_INT_NEXT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710002b9b0(this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__set_no_cliff_stop_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialNMaxShot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

