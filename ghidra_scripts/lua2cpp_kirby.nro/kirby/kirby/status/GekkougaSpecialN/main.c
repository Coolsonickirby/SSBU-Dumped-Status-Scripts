
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::GekkougaSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x141921c83a);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_INT_NEXT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1331f32137);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_INT_NEXT_MOTION_KIND_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__set_no_cliff_stop_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_7100192820(this);
    lib::L2CValue::L2CValue(aLStack80,GekkougaSpecialN_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_GEKKOUGA_SPECIAL_N_MAX_START);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

