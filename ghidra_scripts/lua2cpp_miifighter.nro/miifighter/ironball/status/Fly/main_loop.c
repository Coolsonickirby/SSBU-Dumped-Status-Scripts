
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiifighterIronball::status::Fly_main_loop
          (L2CWeaponMiifighterIronball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  SituationKind SVar4;
  HitStatus HVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      this_00 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100043618;
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      SVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::StatusModule__set_situation_kind_impl(this->moduleAccessor,SVar4,false);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_FLOAT_REFLECTED_SPEED_X);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_FLOAT_REFLECTED_SPEED_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_FALL_MAX_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_OFF);
      HVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
      lib::L2CValue::_L2CValue(aLStack64);
      app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
      app::lua_bind::ShakeModule__stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,1.0);
        fVar7 = (float)lib::L2CValue::as_number(aLStack64);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,-1.0);
        fVar7 = (float)lib::L2CValue::as_number(aLStack64);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      this_00 = aLStack80;
    }
    lib::L2CValue::_L2CValue(this_00);
  }
LAB_7100043618:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

