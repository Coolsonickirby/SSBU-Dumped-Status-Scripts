
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e700(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(param_2);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_710000e770;
  }
  this = &param_2->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT_START);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar7);
    lib::L2CValue::L2CValue(aLStack112,0xe8aed6689);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
      uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000e920;
      lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
      uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000e920;
      lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
      uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000e920;
      lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
      uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000e920;
      lib::L2CValue::L2CValue(aLStack112,0xd40042152);
      uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000e920;
    }
    else {
LAB_710000e920:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT);
        lib::L2CValue::L2CValue(aLStack208,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(param_1,0);
        lib::L2CValue::~L2CValue(aLStack128);
        goto LAB_710000e770;
      }
    }
    lib::L2CValue::~L2CValue(aLStack128);
  }
  ppBVar9 = &param_2->moduleAccessor;
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                  (*ppBVar9,(bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack112);
        FUN_710000fee0(param_2);
        lib::L2CValue::L2CValue(param_1,0);
        goto LAB_710000e770;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_ATTACK_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
        lib::L2CValue::L2CValue(aLStack240,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(param_1,0);
        goto LAB_710000e770;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_TRANS_ID_FALL_CONTROL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
      lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack272,0xcce8375ba);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      uVar6 = lib::L2CValue::operator<=(pLVar5,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_COMMAND_CATEGORY1);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::ControlModule__clear_command_one_impl(*ppBVar9,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,0);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::ControlModule__get_command_flag_cat_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
        lib::L2CValue::operator=(pLVar5,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack304,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::L2CValue(param_1,0);
        goto LAB_710000e770;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_TRANS_ID_ATTACK_AIR_CONTROL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
      lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack272,0xcce8375ba);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      uVar6 = lib::L2CValue::operator<=(pLVar5,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_ATTACK_AIR);
        lib::L2CValue::L2CValue(aLStack336,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::L2CValue(param_1,0);
        goto LAB_710000e770;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_TRANS_ID_FALL_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_FLOAT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_COMMAND_CATEGORY1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ControlModule__clear_command_one_impl(*ppBVar9,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::ControlModule__get_command_flag_cat_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
      lib::L2CValue::operator=(pLVar5,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack368,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710000e770;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_TRANS_ID_ATTACK_AIR_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_FLOAT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_ATTACK_AIR);
      lib::L2CValue::L2CValue(aLStack400,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710000e770;
    }
  }
  lib::L2CValue::L2CValue(aLStack256,_ITEM_KIND_PEACHDAIKON);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIND_DAISY);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_DAISYDAIKON);
    lib::L2CValue::operator=(aLStack256,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_TRANS_ID_SPECIAL_LW_ITEM_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar1 & 1U) == 0) {
LAB_710000f394:
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
LAB_710000f3a4:
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_ENABLE_UNIQ);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,1);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_FLOAT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_FLOAT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_FLOAT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_ENABLE_UNIQ);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_group_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_landing(param_2);
      lib::L2CValue::~L2CValue(aLStack512);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_group_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_special(param_2);
      lib::L2CValue::~L2CValue(aLStack528);
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::operator=(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack128);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_UNIQ_FLOAT_WORK_INT_MTRANS);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator=(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,1);
      uVar6 = lib::L2CValue::operator==(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,2);
        uVar6 = lib::L2CValue::operator==(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
          lib::L2CValue::operator&(pLVar5,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator=(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
          }
          bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x8693f56c6);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack272,false);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            bVar2 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack128);
            pLVar5 = aLStack112;
            goto LAB_710000fa10;
          }
        }
      }
      else {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack176,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
        }
        bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack112,true);
        uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          pLVar5 = aLStack128;
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
          lib::L2CValue::operator&(pLVar5,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          uVar6 = lib::L2CValue::operator==(aLStack144,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar6 & 1) != 0) goto LAB_710000fa14;
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack176,aLStack112);
          pLVar5 = aLStack112;
        }
LAB_710000fa10:
        lib::L2CValue::~L2CValue(pLVar5);
      }
    }
LAB_710000fa14:
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    if ((bVar1 & 1U) != 0) {
      FUN_710000e2a0(param_2);
    }
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1f);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
    lib::L2CValue::operator&(pLVar5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack272);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack272);
      goto LAB_710000f394;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
    lib::L2CValue::operator-(pLVar5);
    lib::L2CValue::L2CValue(aLStack432,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack448,0xfe59ae799);
    uVar6 = lib::L2CValue::as_integer(aLStack432);
    uVar8 = lib::L2CValue::as_integer(aLStack448);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack416,fVar10);
    uVar6 = lib::L2CValue::operator<=(aLStack416,aLStack112);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar9,0);
      lib::L2CValue::L2CValue(aLStack464,iVar3);
      uVar6 = lib::L2CValue::operator==(aLStack464,aLStack256);
      uVar6 = uVar6 & 0xffffffff;
      lib::L2CValue::~L2CValue(aLStack464);
    }
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_710000f3a4;
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_STATUS_KIND_ITEM_THROW);
    lib::L2CValue::L2CValue(aLStack496,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack256);
LAB_710000e770:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

