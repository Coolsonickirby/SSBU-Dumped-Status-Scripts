
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100017270(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue LVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  GroundCorrectKind GVar8;
  ulong uVar9;
  Hash40 HVar10;
  ulong uVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar4 & 1U) != 0) goto LAB_71000172cc;
  ppBVar13 = &this->moduleAccessor;
  bVar5 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar5 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar9 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  LVar2 = SUB81(&stack0xfffffffffffffff0,0);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)((char)LVar2 + 'p'));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar9 = lib::L2CValue::operator==(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_71000172cc:
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar9 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar9 & 1) == 0) goto LAB_71000172cc;
  }
  lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
            (this,(L2CValue)((char)LVar2 + 'P'));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
  iVar6 = lib::L2CValue::as_integer(aLStack144);
  bVar5 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar5 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar9 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
    lVar3 = -0x80;
LAB_71000174f4:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar3));
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_RELEASE_BUTTON);
    iVar6 = lib::L2CValue::as_integer(aLStack208);
    bVar5 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar5 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar9 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_RELEASE_BUTTON);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar6);
      lVar3 = -0x60;
      goto LAB_71000174f4;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_CAN_SHOOT);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  bVar5 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_RELEASE_BUTTON);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar5 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar2 + '0'),(L2CValue)((char)LVar2 + ' '));
      lib::L2CValue::~L2CValue(aLStack240);
      lVar3 = -0xd0;
      goto LAB_7100017754;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_CAN_SHOOT);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_GENERATE_ARTICLE_ARROW1);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar5 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar13,iVar6);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_ARROW1);
      lib::L2CValue::L2CValue(aLStack128,0x726dd60ba);
      lib::L2CValue::L2CValue(aLStack144,true);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      HVar10 = lib::L2CValue::as_hash(aLStack128);
      bVar5 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::ArticleModule__change_motion_impl
                (*ppBVar13,iVar6,HVar10,(bool)(bVar5 & 1),-1.0);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  bVar5 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_MAX_SHOOT);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)((char)LVar2 + '\x10'),LVar2);
    lib::L2CValue::~L2CValue(aLStack272);
    lVar3 = -0xf0;
LAB_7100017754:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar3));
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_HOLD_COUNT);
  iVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack128,iVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x12ad67c2c8);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar11 = lib::L2CValue::as_integer(aLStack176);
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar11);
  lib::L2CValue::L2CValue(aLStack144,iVar6);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0x1073c62d56);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar11 = lib::L2CValue::as_integer(aLStack208);
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar11);
  lib::L2CValue::L2CValue(aLStack176,iVar6);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar9 = lib::L2CValue::operator<=(aLStack144,aLStack128);
  if (((uVar9 & 1) != 0) &&
     (uVar9 = lib::L2CValue::operator<(aLStack128,aLStack176), (uVar9 & 1) != 0)) {
    fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
    lib::L2CValue::L2CValue(aLStack208,fVar14);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_ENABLE_TURN);
    iVar6 = lib::L2CValue::as_integer(aLStack288);
    bVar5 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar1 = &this->globalTable;
    if ((bVar4 & 1U) == 0) {
LAB_7100017b40:
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar9 = lib::L2CValue::operator==(pLVar12,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x1f);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
        lib::L2CValue::operator&(pLVar12,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
          iVar6 = lib::L2CValue::as_integer(aLStack304);
          bVar5 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack288,(bool)(bVar5 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar9 = lib::L2CValue::operator==(aLStack288,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
            iVar6 = lib::L2CValue::as_integer(aLStack288);
            bVar5 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar13,iVar6);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack288);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack112);
              iVar7 = lib::L2CValue::as_integer(aLStack288);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
              lib::L2CValue::L2CValue
                        (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack112);
              iVar7 = lib::L2CValue::as_integer(aLStack288);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
            }
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack528,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack544,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::~L2CValue(aLStack544);
            lib::L2CValue::~L2CValue(aLStack528);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100018ac0;
          }
        }
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x20);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
        lib::L2CValue::operator&(pLVar12,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack288,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar6 = lib::L2CValue::as_integer(aLStack288);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack112,iVar6);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar6 = lib::L2CValue::as_integer(aLStack320);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack304,iVar6);
          uVar9 = lib::L2CValue::operator<(aLStack112,aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((uVar9 & 1) != 0) {
            bVar5 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar13);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar4 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack288,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL)
              ;
              iVar6 = lib::L2CValue::as_integer(aLStack288);
              bVar5 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar13,iVar6);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
              bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack288);
              if ((bVar4 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
                lib::L2CValue::L2CValue
                          (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack112);
                iVar7 = lib::L2CValue::as_integer(aLStack288);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL);
                lib::L2CValue::L2CValue
                          (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack112);
                iVar7 = lib::L2CValue::as_integer(aLStack288);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
              }
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack560,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
              lib::L2CValue::L2CValue(aLStack576,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
              lib::L2CValue::~L2CValue(aLStack576);
              lib::L2CValue::~L2CValue(aLStack560);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              goto LAB_7100018ac0;
            }
          }
        }
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x20);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar12,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack288,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar6 = lib::L2CValue::as_integer(aLStack288);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack112,iVar6);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar6 = lib::L2CValue::as_integer(aLStack320);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack304,iVar6);
          uVar9 = lib::L2CValue::operator<(aLStack112,aLStack304);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
            iVar6 = lib::L2CValue::as_integer(aLStack288);
            bVar5 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar13,iVar6);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack288);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack112);
              iVar7 = lib::L2CValue::as_integer(aLStack288);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL);
              lib::L2CValue::L2CValue
                        (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack112);
              iVar7 = lib::L2CValue::as_integer(aLStack288);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
            }
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack592,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
            lib::L2CValue::L2CValue(aLStack608,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            lib::L2CValue::~L2CValue(aLStack608);
            lib::L2CValue::~L2CValue(aLStack592);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100018ac0;
          }
        }
LAB_7100018508:
        lib::L2CValue::~L2CValue(aLStack208);
        goto LAB_7100018510;
      }
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x21);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
      lib::L2CValue::operator&(pLVar12,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
      lib::L2CValue::~L2CValue(aLStack288);
      if ((bVar4 & 1U) == 0) {
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x20);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
        lib::L2CValue::operator&(pLVar12,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack288);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar9 = lib::L2CValue::operator==(aLStack304,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP_MINI_ATTACK);
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar7 = lib::L2CValue::as_integer(aLStack288);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack400,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack416,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100018ac0;
          }
        }
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x20);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar12,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((bVar4 & 1U) == 0) {
          bVar5 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar13);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar4 & 1U) != 0) {
            pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x20);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
            lib::L2CValue::operator&(pLVar12,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack288);
            lib::L2CValue::~L2CValue(aLStack288);
            if ((bVar4 & 1U) != 0) {
              lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
              lib::L2CValue::L2CValue(aLStack112,true);
              uVar9 = lib::L2CValue::operator==(aLStack288,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack288);
              if ((uVar9 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
                lib::L2CValue::L2CValue
                          (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack112);
                iVar7 = lib::L2CValue::as_integer(aLStack288);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
                lib::L2CValue::L2CValue
                          (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack112);
                iVar7 = lib::L2CValue::as_integer(aLStack288);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
              }
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack464,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
              lib::L2CValue::L2CValue(aLStack480,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
              lib::L2CValue::~L2CValue(aLStack480);
              lib::L2CValue::~L2CValue(aLStack464);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              goto LAB_7100018ac0;
            }
          }
          lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar4 & 1U) == 0) goto LAB_7100018508;
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
          iVar6 = lib::L2CValue::as_integer(aLStack288);
          bVar5 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar13,iVar6);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar5 & 1));
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar7 = lib::L2CValue::as_integer(aLStack288);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_GUARD);
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar7 = lib::L2CValue::as_integer(aLStack288);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
          }
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack496,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack512,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
          lib::L2CValue::~L2CValue(aLStack512);
          lib::L2CValue::~L2CValue(aLStack496);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar9 = lib::L2CValue::operator==(aLStack288,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar7 = lib::L2CValue::as_integer(aLStack288);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar7 = lib::L2CValue::as_integer(aLStack288);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
          }
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack432,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack448,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
        iVar6 = lib::L2CValue::as_integer(aLStack304);
        bVar5 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar13,iVar6);
        lib::L2CValue::L2CValue(aLStack288,(bool)(bVar5 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar9 = lib::L2CValue::operator==(aLStack288,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar6 = lib::L2CValue::as_integer(aLStack112);
          iVar7 = lib::L2CValue::as_integer(aLStack288);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar6 = lib::L2CValue::as_integer(aLStack112);
          iVar7 = lib::L2CValue::as_integer(aLStack288);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar6,iVar7);
        }
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack384,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
    else {
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x1a);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar9 = lib::L2CValue::operator<(pLVar12,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
LAB_7100017954:
        pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x1a);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar9 = lib::L2CValue::operator<(aLStack112,pLVar12);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          uVar9 = lib::L2CValue::operator==(aLStack208,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar9 & 1) != 0) goto LAB_71000179b4;
        }
        goto LAB_7100017b40;
      }
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar9 = lib::L2CValue::operator==(aLStack208,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) goto LAB_7100017954;
LAB_71000179b4:
      pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0xe);
      lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x1233dca9f0);
      uVar9 = lib::L2CValue::as_integer(aLStack288);
      uVar11 = lib::L2CValue::as_integer(aLStack304);
      iVar6 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar9,uVar11);
      lib::L2CValue::L2CValue(aLStack112,iVar6);
      uVar9 = lib::L2CValue::operator<(aLStack112,pLVar12);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      if ((uVar9 & 1) == 0) goto LAB_7100017b40;
      fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack320,fVar14);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::operator-(aLStack320,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator+(aLStack304,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_FLOAT_INHERIT_MOTION_FRAME);
      fVar14 = (float)lib::L2CValue::as_number(aLStack288);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar6);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_TURN);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
LAB_7100018ac0:
    lib::L2CValue::~L2CValue(aLStack208);
    goto LAB_71000186cc;
  }
LAB_7100018510:
  pLVar1 = &this->globalTable;
  pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x17);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar9 = lib::L2CValue::operator==(pLVar12,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator==(pLVar12,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar8 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar13,HVar10,-1.0,1.0,0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x139538a2ac);
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::SoundModule__play_landing_se_impl(*ppBVar13,HVar10);
      goto LAB_71000186b8;
    }
  }
  else {
    pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar9 = lib::L2CValue::operator==(pLVar12,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar8 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar13,HVar10,-1.0,1.0,0.0,false,false);
LAB_71000186b8:
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000186cc:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

