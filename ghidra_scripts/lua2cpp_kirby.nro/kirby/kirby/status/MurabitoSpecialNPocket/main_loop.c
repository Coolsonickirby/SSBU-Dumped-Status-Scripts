
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MurabitoSpecialNPocket_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  void *pvVar9;
  float fVar10;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar3 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_71001a31c4;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar3 & 1U) != 0) goto LAB_71001a31cc;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_TAKEOUT_INPUT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      pLVar7 = aLStack80;
    }
    else {
LAB_71001a31c4:
      pLVar7 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_71001a31cc:
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI4);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar3 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar3 & 1U) != 0) {
LAB_71001a3328:
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_71001a3330;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW4);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar3 & 1U) != 0) {
LAB_71001a3320:
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_71001a3328;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI3);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_71001a3320;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      if ((bVar3 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW3);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      else {
        bVar2 = 1;
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1) != 0) goto LAB_71001a3338;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_TAKEOUT_INPUT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      pLVar7 = aLStack80;
    }
    else {
LAB_71001a3330:
      pLVar7 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_71001a3338:
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_TAKEOUT_REQUEST);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lVar1 = -0x70;
LAB_71001a3428:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_TAKEOUT_INPUT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lVar1 = -0x40;
      goto LAB_71001a3428;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_END_POCKET);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) == 0) {
LAB_71001a3a08:
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIRBY_STATUS_KIND_MURABITO_SPECIAL_N_TAKE_OUT);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71001a3fd4;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_REQUEST_TAKEOUT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack304,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xd0);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar8 & 1) != 0) goto LAB_71001a3ba4;
        }
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71001a3fd4;
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
LAB_71001a3ba4:
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_REQUEST_TAKEOUT);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar3 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::operator_(aLStack112,aLStack80);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,1);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_TAKEOUT_BUFFER);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MURABITO_SPECIAL_N_TAKE_OUT);
          lib::L2CValue::operator_(aLStack112,aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack320,aLStack112);
        lib::L2CValue::L2CValue(aLStack336,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71001a3fcc;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MURABITO_SPECIAL_N);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator_(aLStack192,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xe3e2e45a8);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x127c7cb067);
      lib::L2CValue::operator_(aLStack128,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack368,aLStack192);
    lib::L2CValue::L2CValue(aLStack384,aLStack112);
    lib::L2CValue::L2CValue(aLStack400,aLStack128);
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack448,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    lib::L2CValue::L2CValue(aLStack464,GROUND_CORRECT_KIND_AIR);
    FUN_71001a27c0(aLStack352,this,aLStack368,aLStack384,aLStack400,aLStack416,aLStack432,aLStack448
                   ,aLStack464);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x2d44edd0f8);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLOAT_ADD_SCALE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLOAT_TARGET_SCALE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if (((bVar3 & 1U) != 0) ||
       (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96), (bVar3 & 1U) != 0)) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = app::sv_battle_object::category(uVar5);
      lib::L2CValue::L2CValue(aLStack128,uVar5 & 0xff);
      lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack128,iVar4);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        pvVar9 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                                   (LUA_SCRIPT_STATUS_FUNC_EXEC_STOP,uVar5);
        if (pvVar9 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,pvVar9);
        }
        uVar8 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,false);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,false);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x50000000);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if (((bVar3 & 1U) == 0) &&
       (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96), (bVar3 & 1U) == 0)) {
      lib::L2CValue::L2CValue(aLStack80,0x2720155b0b);
      lib::L2CValue::L2CValue(aLStack128,0x5e008fd84);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.2);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x29660ac06a);
      lib::L2CValue::L2CValue(aLStack128,true);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_END_POCKET);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack80,0x50000000);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_71001a3a08;
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KIRBY_STATUS_KIND_MURABITO_SPECIAL_N_FAILURE);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status
              (this,(L2CValue)((char)&stack0xfffffffffffffff0 + ' '),(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_71001a3fcc:
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71001a3fd4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

