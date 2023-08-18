
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiifighterIronball::status::Fly_exec
          (L2CWeaponMiifighterIronball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) goto LAB_7100041d90;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
LAB_7100041bb8:
    lib::L2CValue::_L2CValue(this_00);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLOAT_POWER_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue(aLStack144,0xe06ed07db);
      lib::L2CValue::L2CValue(aLStack160,0xad0949135);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::AttackModule__set_power_mul_impl(this->moduleAccessor,fVar7);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::AttackModule__set_reaction_mul_impl(this->moduleAccessor,fVar7);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLOAT_POWER_RATE);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      this_00 = aLStack80;
      goto LAB_7100041bb8;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::L2CValue(aLStack144,0xe06ed07db);
  lib::L2CValue::L2CValue(aLStack160,0xbd93356be);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::operator_(aLStack128);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xe06ed07db);
    lib::L2CValue::L2CValue(aLStack112,0x18ce33783f);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_INT_FALL_MAX_SPEED_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_FALL_MAX_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_FALL_MAX_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100041d90:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

