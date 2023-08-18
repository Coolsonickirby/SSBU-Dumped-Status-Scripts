
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue LVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Fighter *pFVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71001467f0(aLStack128,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100146cb0(this);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  ppBVar11 = &this->moduleAccessor;
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  if ((bVar4 & 1U) != 0) {
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack192,true);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar1 + '`'),(L2CValue)((char)LVar1 + 'P'));
      lib::L2CValue::_L2CValue(aLStack192);
      lVar2 = -0xa0;
      goto LAB_710014db38;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
    iVar5 = lib::L2CValue::as_integer(aLStack224);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar4 & 1U) != 0) goto LAB_710014da88;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
LAB_710014da88:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      FUN_71001479a0(aLStack112,this);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
        lib::L2CValue::L2CValue(aLStack256,true);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)((char)LVar1 + ' '),(L2CValue)((char)LVar1 + '\x10'));
        lib::L2CValue::_L2CValue(aLStack256);
        lVar2 = -0xe0;
LAB_710014db38:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar5 = lib::L2CValue::as_integer(aLStack208);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  HVar6 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack208,HVar6);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack224,HVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1aa7d07a51);
  uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    FUN_7100147290(aLStack112,this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,LVar1,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar7 = lib::L2CValue::operator__(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x1aa7d07a51);
    uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,_CONTROL_PAD_BUTTON_GUARD);
      iVar5 = lib::L2CValue::as_integer(aLStack304);
      bVar3 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar4 & 1U) == 0) {
        FUN_7100147830(aLStack320,this);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack320);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack304);
        if ((bVar4 & 1U) == 0) goto LAB_710014dd04;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack304);
      }
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
LAB_710014dd04:
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack384,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PASS);
    iVar5 = lib::L2CValue::as_integer(aLStack304);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack416,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack304,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack432,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack304,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack464,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack480,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack304,fVar12);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::L2CValue(aLStack496,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack512,0xcf44ba9e5);
    uVar7 = lib::L2CValue::as_integer(aLStack496);
    uVar9 = lib::L2CValue::as_integer(aLStack512);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    uVar7 = lib::L2CValue::operator__(aLStack320,aLStack112);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack528,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_WALK_F);
      lib::L2CValue::L2CValue(aLStack544,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014e884;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
    lib::L2CValue::operator_(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar7 = lib::L2CValue::operator__(aLStack304,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar7 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack496,fVar12);
      lib::L2CValue::operator_(aLStack496);
      lib::L2CValue::operator_(pLVar8,aLStack320);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack112,aLStack304);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack496);
      }
      else {
        FUN_71001479a0(aLStack112,this);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack496);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack560,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
          lib::L2CValue::L2CValue(aLStack576,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack576);
          lib::L2CValue::_L2CValue(aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710014e884;
        }
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack304,fVar12);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::L2CValue(aLStack496,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack512,0xcee0a3848);
    uVar7 = lib::L2CValue::as_integer(aLStack496);
    uVar9 = lib::L2CValue::as_integer(aLStack512);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1aa7d07a51);
      uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        FUN_71001479a0(aLStack112,this);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack592,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
          lib::L2CValue::L2CValue(aLStack608,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue(aLStack592);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710014e884;
        }
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    lib::L2CValue::operator_(aLStack320);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::L2CValue(aLStack512,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack624,0xcf44ba9e5);
    uVar7 = lib::L2CValue::as_integer(aLStack512);
    uVar9 = lib::L2CValue::as_integer(aLStack624);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack496,fVar12);
    uVar7 = lib::L2CValue::operator__(aLStack496,aLStack112);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1aa7d07a51);
      uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack640,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_WALK_B);
        lib::L2CValue::L2CValue(aLStack656,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack656);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710014e884;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0x1aa7d07a51);
  uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    FUN_71001481f0(aLStack112,this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if (((bVar4 & 1U) == 0) &&
       (bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack160), (bVar4 & 1U) == 0)) {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_RESERVED_SHOOT_TURN);
      iVar5 = lib::L2CValue::as_integer(aLStack320);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) == 0) goto LAB_710014e870;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,0x1454acacb0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,1.0);
    lib::L2CValue::L2CValue(aLStack496,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack304);
    fVar13 = (float)lib::L2CValue::as_number(aLStack320);
    bVar3 = lib::L2CValue::as_bool(aLStack496);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*ppBVar11,HVar6,fVar12,fVar13,(bool)(bVar3 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar10,false);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_RESERVED_SHOOT_TURN);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
LAB_710014e868:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x14719c269a);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,1.0);
      lib::L2CValue::L2CValue(aLStack496,false);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack304);
      fVar13 = (float)lib::L2CValue::as_number(aLStack320);
      bVar3 = lib::L2CValue::as_bool(aLStack496);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*ppBVar11,HVar6,fVar12,fVar13,(bool)(bVar3 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
      app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar10,false);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
      goto LAB_710014e868;
    }
  }
LAB_710014e870:
  FUN_7100148080(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710014e884:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

