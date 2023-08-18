
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerGroundbomb::status::Fly_main_loop
          (L2CWeaponMiigunnerGroundbomb *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  SituationKind SVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        SVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StatusModule__set_situation_kind_impl(*ppBVar8,SVar4,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        fVar9 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_FLOAT_REFLECTED_SPEED_X);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar9);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_FLOAT_REFLECTED_SPEED_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack128,fVar9);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x10e835f61d);
        lib::L2CValue::L2CValue(aLStack160,0xe9b471e2c);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::operator_(aLStack144);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::operator_(aLStack96,aLStack112);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator_(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
          lib::L2CValue::L2CValue(aLStack160,-1.0);
          lib::L2CValue::L2CValue(aLStack176,-1.0);
          lib::L2CValue::L2CValue(aLStack192,-1.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        app::lua_bind::ShakeModule__stop_impl(*ppBVar8);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,1.0);
          fVar9 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::PostureModule__set_lr_impl(*ppBVar8,fVar9);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          fVar9 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::PostureModule__set_lr_impl(*ppBVar8,fVar9);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x10e835f61d);
        lib::L2CValue::L2CValue(aLStack176,0x1e59587f8d);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,
                   _WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_DAMAGE_REFLECT_AFTER_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = (uVar6 & 1) == 0;
        if (bVar2) {
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue
                    (aLStack176,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_HIT_AFTER_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar5);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
          lib::L2CValue::L2CValue(aLStack192,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        if (!bVar2) {
          return;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_REFLECT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      SVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_situation_kind_impl(*ppBVar8,SVar4,false);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      fVar9 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x10e835f61d);
      lib::L2CValue::L2CValue(aLStack128,0xf6f88b83c);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x10e835f61d);
      lib::L2CValue::L2CValue(aLStack144,0xf188f88aa);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x10e835f61d);
      lib::L2CValue::L2CValue(aLStack160,0xe9b471e2c);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::operator_(aLStack112,aLStack208);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
        lib::L2CValue::L2CValue(aLStack160,-1.0);
        lib::L2CValue::L2CValue(aLStack208,-1.0);
        lib::L2CValue::L2CValue(aLStack224,-1.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      app::lua_bind::ShakeModule__stop_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_REFLECT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::AttackModule__set_no_team_impl(*ppBVar8,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

