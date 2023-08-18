
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialLwPlant_main_loop
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this_00;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001dc5c:
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_PLANT_FAIL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    else {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLAG_CHECK_PLANT);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLAG_CHECK_PLANT);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack64);
          FUN_710001e3a0(aLStack80,this);
          lib::L2CValue::L2CValue(aLStack64,false);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack128,fVar8);
            lib::L2CValue::L2CValue(aLStack64,-1.0);
            lib::L2CValue::operator_(aLStack64,aLStack128);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack160,0xa9e892552);
            uVar6 = lib::L2CValue::as_integer(aLStack144);
            uVar7 = lib::L2CValue::as_integer(aLStack160);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar6,uVar7);
            lib::L2CValue::L2CValue(aLStack64,fVar8);
            lib::L2CValue::operator_(aLStack96,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_kinetic_energy::set_brake(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLAG_PLANT);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
          FUN_710001e3a0(aLStack64,this);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_PLANT_FAIL);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
            goto LAB_710001dd20;
          }
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_GENERATE_ARTICLE_SPROUT);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar5,false,-1);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_GENERATE_ARTICLE_SEED);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar5,0);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLAG_SUCCESS);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLAG_PLANT);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack64);
        }
        iVar5 = 0;
        goto LAB_710001dd50;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
LAB_710001dd20:
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
LAB_710001dd44:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x40;
      goto LAB_710001dd44;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001dc5c;
  }
  iVar5 = 1;
LAB_710001dd50:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

