
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchOctopus::status::Hold_main_loop
          (L2CWeaponGamewatchOctopus *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_START_POS_X);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  pLVar4 = aLStack112;
  lib::L2CValue::operator_(aLStack96,pLVar4);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack144,0xfdeeac360);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,10.0);
  lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  if ((uVar2 & 1) == 0) {
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    fVar5 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
    uVar2 = lib::L2CValue::operator__((L2CValue *)&stack0xffffffffffffffc0,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&stack0xffffffffffffffc0,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&stack0xffffffffffffffc0,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

