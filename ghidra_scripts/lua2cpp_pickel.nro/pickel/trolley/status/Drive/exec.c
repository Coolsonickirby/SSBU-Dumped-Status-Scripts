
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponPickelTrolley::status::Drive_exec(L2CAgent *this)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Weapon *pWVar9;
  ulong uVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  L2CValue *return_value;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
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
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  ppBVar13 = &this->moduleAccessor;
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_IGNORE_OFF_RAIL_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_KEEP_POWERED_RAIL_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DISABLE_ATTACK_COLLISION_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_RE_RIDE_DISABLE_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar13,iVar4,0);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_JUMP_DISABLE_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar13,iVar4,0);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_EFFECT_INTERVAL);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar13,iVar4,0);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar13,-1);
  lib::L2CValue::L2CValue(aLStack160,fVar14);
  fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack192,fVar14);
  lib::L2CValue::operator_(aLStack160,aLStack192);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar7 = lib::L2CValue::operator_(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack192,0xd1c006425);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LR_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lVar1 = -0xa0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LR_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar13,iVar4);
    lVar1 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue
            (aLStack176,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_RESTORE_TEAM_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar13,iVar4,0);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar3 & 1U) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[2].battleObject,4);
    pWVar9 = (Weapon *)lib::L2CValue::as_pointer(pLVar8);
    app::WeaponSpecializer_PickelTrolley::set_original_pickel_team(pWVar9);
  }
  FUN_71000a5130(aLStack96,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LIFETIME);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar13,iVar4,0);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack176,0x16896c6143);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar11 = lib::L2CValue::as_hash(aLStack176);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue(aLStack176,0x15a0da464d);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar11 = lib::L2CValue::as_hash(aLStack176);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(this);
      lib::L2CAgent::push_lua_stack(this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(this,1);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(return_value,0);
      goto LAB_71000a4b64;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack192,0x83de73088);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LIFETIME);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_HP);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue(aLStack192,fVar14);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar7 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_SITUATION_KIND_WATER);
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_REFLECT_COUNT_MAX)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_LEFT);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  iVar4 = app::lua_bind::GroundModule__get_touch_material_type_impl(*ppBVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  FUN_71000a5280(aLStack96,aLStack240);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_RIGHT);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = app::lua_bind::GroundModule__get_touch_material_type_impl(*ppBVar13,uVar6);
    lib::L2CValue::L2CValue(aLStack256,iVar4);
    FUN_71000a5280(aLStack96,aLStack256);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      goto LAB_71000a41e0;
    }
    lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_UP);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = app::lua_bind::GroundModule__get_touch_material_type_impl(*ppBVar13,uVar6);
    lib::L2CValue::L2CValue(aLStack272,iVar4);
    FUN_71000a5280(aLStack96,aLStack272);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      goto LAB_71000a41e0;
    }
    lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_DOWN);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = app::lua_bind::GroundModule__get_touch_material_type_impl(*ppBVar13,uVar6);
    lib::L2CValue::L2CValue(aLStack288,iVar4);
    FUN_71000a5280(aLStack96,aLStack288);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      goto LAB_71000a41e0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack176,aLStack96);
LAB_71000a41e0:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  if ((bVar3 & 1U) == 0) {
    FUN_71000a53a0(aLStack96,this);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
      lib::L2CValue::L2CValue(aLStack192,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[2].battleObject,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
        uVar7 = lib::L2CValue::operator__(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          FUN_71000a5460(aLStack208,this);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          uVar7 = lib::L2CValue::operator__(aLStack208,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack96,
                       _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_STICK_EFFECT_INTERVAL_COUNT);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar4);
            lib::L2CValue::L2CValue(aLStack304,fVar14);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
            lib::L2CAgent::clear_lua_stack(this);
            lib::L2CAgent::push_lua_stack(this,aLStack96);
            fVar14 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
            lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar14);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xdfbf78d6f);
            lib::L2CValue::L2CValue((L2CValue *)(auStack416 + 0x10),0x2232b3af4e);
            pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
            pLVar12 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack416 + 0x10));
            fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (*ppBVar13,(ulong)pLVar8,(ulong)pLVar12);
            lib::L2CValue::L2CValue(aLStack384,fVar14);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack416 + 0x10));
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar8);
            lib::L2CAgent::math_min((L2CAgent *)auStack416,aLStack384,pLVar12);
            lib::L2CValue::operator_(aLStack96,aLStack384);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue((L2CValue *)auStack416);
            lib::L2CValue::L2CValue(aLStack96,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack432,0x2224823f00);
            uVar7 = lib::L2CValue::as_integer(aLStack96);
            uVar10 = lib::L2CValue::as_integer(aLStack432);
            fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar10);
            lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar14);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,1.0);
            lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack416);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::operator_(aLStack464,(L2CValue *)(auStack416 + 0x10));
            lib::L2CValue::operator_(aLStack448,(L2CValue *)auStack416);
            lib::L2CValue::_L2CValue(aLStack448);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::operator_(aLStack304,aLStack432);
            lib::L2CValue::operator_(aLStack304,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            uVar7 = lib::L2CValue::operator__(aLStack304,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0.0);
              lib::L2CValue::operator_(aLStack304,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue
                        (aLStack96,
                         _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_STICK_EFFECT_INTERVAL_COUNT);
              fVar14 = (float)lib::L2CValue::as_number(aLStack448);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar4);
              lib::L2CValue::_L2CValue(aLStack96);
              pLVar8 = aLStack448;
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_EFFECT);
              lib::L2CValue::L2CValue(aLStack448,0x1c251f579f);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              HVar11 = lib::L2CValue::as_hash(aLStack448);
              app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1)
              ;
              lib::L2CValue::_L2CValue(aLStack448);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack480,0xdfbf78d6f);
              lib::L2CValue::L2CValue(aLStack496,0x15798b8a1d);
              uVar7 = lib::L2CValue::as_integer(aLStack480);
              uVar10 = lib::L2CValue::as_integer(aLStack496);
              iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar10);
              lib::L2CValue::L2CValue(aLStack464,iVar4);
              lib::L2CValue::L2CValue(aLStack96,0.0);
              lib::L2CValue::operator_(aLStack464,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue
                        (aLStack96,
                         _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_STICK_EFFECT_INTERVAL_COUNT);
              fVar14 = (float)lib::L2CValue::as_number(aLStack448);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar4);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack448);
              lib::L2CValue::_L2CValue(aLStack464);
              lib::L2CValue::_L2CValue(aLStack496);
              pLVar8 = aLStack480;
            }
            lib::L2CValue::_L2CValue(pLVar8);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue((L2CValue *)auStack416);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack416 + 0x10));
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue((L2CValue *)auStack368);
            lib::L2CValue::_L2CValue(aLStack304);
          }
          lib::L2CValue::_L2CValue(aLStack208);
        }
      }
      lib::L2CValue::_L2CValue(aLStack192);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_SITUATION_AIR_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar13,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue
                (aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_SITUATION_AIR_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(return_value,0);
  }
  else {
    app::WeaponPickelTrolleyLinkEventDestroyed::new_l2c_table();
    lib::L2CValue::L2CValue(aLStack208,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack304,0x15a1fd6be8);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar10 = lib::L2CValue::as_integer(aLStack304);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack96,fVar14);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xc82fdc145);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack304,0x1126999914);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar10 = lib::L2CValue::as_integer(aLStack304);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack96,fVar14);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x874f378e6);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
      FUN_7100067e30(aLStack320,this,aLStack96,aLStack192);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
      FUN_7100067e30(aLStack336,this,aLStack96,aLStack192);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar13,-1);
    lib::L2CValue::L2CValue(aLStack208,fVar14);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar7 = lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack208,0x176b6ecafa);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar11 = lib::L2CValue::as_hash(aLStack208);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack208,0x179161f799);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar11 = lib::L2CValue::as_hash(aLStack208);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_SOUND);
    lib::L2CValue::L2CValue(aLStack208,0x152347590a);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    HVar11 = lib::L2CValue::as_hash(aLStack208);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar13,iVar4,HVar11,-1);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(this);
    lib::L2CAgent::push_lua_stack(this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(this,1);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(return_value,0);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::_L2CValue(aLStack176);
LAB_71000a4b64:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

