
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KamuiSpecialNBite_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar4 & 1) != 0) goto LAB_710017642c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71001771c0;
  }
  lib::L2CValue::_L2CValue(aLStack192);
LAB_710017642c:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator_(aLStack160,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator_(aLStack160,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack256,aLStack160);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71001771c0;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_AIR_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_AIR_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0xfca395421);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_MOTION_END2);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf5330059b);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0x13c1a0d9f5);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_MOTION_END2);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1358a9884f);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack288,aLStack144);
  lib::L2CValue::L2CValue(aLStack304,aLStack112);
  lib::L2CValue::L2CValue(aLStack320,aLStack96);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack368,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack384,GROUND_CORRECT_KIND_AIR);
  FUN_7100177570(aLStack192,this,aLStack288,aLStack304,aLStack320,aLStack336,aLStack352,aLStack368,
                 aLStack384);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar4 & 1) != 0) {
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    this_00 = &this->globalTable;
    if ((bVar2 & 1U) == 0) {
LAB_71001769bc:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack192);
LAB_7100176a3c:
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_71001769bc;
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack240,0x1af412c7b7);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar6);
        lib::L2CValue::L2CValue(aLStack192,fVar8);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_7100176a3c;
      }
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xfca395421);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfca395421);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x11d8673420);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_BITE_HOLD_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,fVar8);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_MOTION_END2);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xf5330059b);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x11da218a79);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x11e6de2cf4);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x137af6d093);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,0x13c1a0d9f5);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x13c1a0d9f5);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x15ae3ac03f);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_MOTION_END2);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1358a9884f);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x15ac7c7e66);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x159083d8eb);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x170d7c9e55);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
          lib::L2CValue::L2CValue(aLStack192,true);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
          lib::L2CValue::L2CValue(aLStack192,true);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        }
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        }
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71001771c0:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

