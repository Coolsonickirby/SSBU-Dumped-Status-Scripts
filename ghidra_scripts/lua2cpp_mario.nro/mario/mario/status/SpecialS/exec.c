
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMario::status::SpecialS_exec(L2CFighterMario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this_00;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARIO_STATUS_SPECIAL_S_FLAG_SPECIAL_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack176,0);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar5);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack144,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack160,0);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,fVar5);
      lib::L2CValue::operator_(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARIO_STATUS_SPECIAL_S_FLAG_HOP);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator__(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_STATUS_SPECIAL_S_FLAG_HOP);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        fVar5 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack64,fVar5);
        lib::L2CValue::operator_(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar3 = lib::L2CValue::operator__(aLStack144,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0.0);
          lib::L2CValue::operator_(aLStack96,aLStack64);
          this_00 = aLStack64;
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack160,0x1664318577);
          uVar3 = lib::L2CValue::as_integer(aLStack144);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar3,uVar4);
          lib::L2CValue::L2CValue(aLStack64,fVar5);
          lib::L2CValue::operator_(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack160);
          this_00 = aLStack144;
        }
        lib::L2CValue::_L2CValue(this_00);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x1632aee85c);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar5);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x164678c67a);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,fVar5);
      lib::L2CValue::operator_(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    }
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

