
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100136640(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_7100136864:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack288,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack304,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::~L2CValue(aLStack304);
          pLVar7 = aLStack288;
          goto LAB_7100136e34;
        }
      }
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack320,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack336,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::~L2CValue(aLStack336);
          pLVar7 = aLStack320;
          goto LAB_7100136e34;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack368,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0xb99cc3fbc);
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_JUMP_AERIAL_TYPE_FLY);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JUMP_AERIAL_TYPE_FLY_BUTTON);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack80,2);
        uVar5 = lib::L2CValue::operator<=(aLStack80,aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_7100136ce8;
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
        if ((bVar2 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
          lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack176,0xcce8375ba);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,
                                    uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar8);
          uVar5 = lib::L2CValue::operator<=(aLStack80,pLVar7);
          if ((uVar5 & 1) == 0) {
            bVar1 = 0;
          }
          else {
            bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
            lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
            bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
            lib::L2CValue::~L2CValue(aLStack192);
          }
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar1 & 1) == 0) goto LAB_7100136cf8;
        }
        else {
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack352,true);
          goto LAB_7100136d04;
        }
      }
LAB_7100136cf8:
      lib::L2CValue::L2CValue(aLStack352,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,2);
      uVar5 = lib::L2CValue::operator<=(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
LAB_7100136ce8:
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        goto LAB_7100136cf8;
      }
      lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xcce8375ba);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6
                                 );
        lib::L2CValue::L2CValue(aLStack160,fVar8);
        uVar5 = lib::L2CValue::operator<=(aLStack160,pLVar7);
        if ((uVar5 & 1) == 0) {
          bVar1 = 0;
        }
        else {
          bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack208);
          lib::L2CValue::~L2CValue(aLStack208);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar1 & 1) == 0) goto LAB_7100136cf8;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100136cf8;
      lib::L2CValue::L2CValue(aLStack352,true);
    }
LAB_7100136d04:
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack352);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack384,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack400,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
          lib::L2CValue::~L2CValue(aLStack400);
          pLVar7 = aLStack384;
          goto LAB_7100136e34;
        }
      }
    }
    bVar2 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_71001367e0:
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100136864;
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_LANDING);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      pLVar7 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_SPEED_Y_STABLE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack128,0x13c30c93f0);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_71001367e0;
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_LANDING_LIGHT)
      ;
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar7 = aLStack224;
    }
LAB_7100136e34:
    lib::L2CValue::~L2CValue(pLVar7);
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

