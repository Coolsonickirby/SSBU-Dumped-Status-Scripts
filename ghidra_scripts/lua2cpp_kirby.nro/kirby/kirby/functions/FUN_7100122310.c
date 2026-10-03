
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100122310(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      goto LAB_71001224b0;
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lVar1 = -0x40;
      goto LAB_71001224bc;
    }
  }
  else {
LAB_71001224b0:
    lib::L2CValue::~L2CValue(aLStack112);
    lVar1 = -0x70;
LAB_71001224bc:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
    lVar1 = -0x70;
LAB_71001225bc:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lVar1 = -0x40;
      goto LAB_71001225bc;
    }
  }
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StatusModule__set_succeeds_bit_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack208,param_3);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status
              (param_2,(L2CValue)((char)&stack0xfffffffffffffff0 + '@'),(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_7100122970;
  }
  lib::L2CValue::L2CValue(aLStack112,0xfe5104c88);
  lib::L2CValue::L2CValue(aLStack128,0x12ef89b9c7);
  lib::L2CValue::L2CValue(aLStack80,0x164a64627a);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1905a6a2df);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack240,aLStack112);
  FUN_7100121cb0(aLStack80,param_2,aLStack240);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack256,aLStack128);
    FUN_7100121cb0(aLStack80,param_2,aLStack256);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      goto LAB_71001227f0;
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      goto LAB_71001227f0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(aLStack144,aLStack80);
LAB_71001227f0:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack160,HVar5);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack160,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if (((uVar6 & 1) == 0) &&
     (bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144), (bVar3 & 1U) != 0)) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar3 & 1U) == 0) goto LAB_710012294c;
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,HVar5);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack176,HVar5);
      uVar6 = lib::L2CValue::operator==(aLStack176,aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack176);
        lVar1 = -0xb0;
        goto LAB_7100122aa4;
      }
      lib::L2CValue::L2CValue
                (aLStack288,
                 _FIGHTER_PICKEL_STATUS_SPECIAL_N3_INT_GENERATE_PICKELOBJECT_FAILURE_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack288);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack272,iVar4);
      lib::L2CValue::L2CValue(aLStack80,2);
      uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack272);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator=(aLStack160,aLStack80);
          goto LAB_7100122934;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack160,aLStack80);
LAB_7100122934:
      lVar1 = -0x40;
LAB_7100122aa4:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar3 & 1U) == 0) {
      pLVar7 = aLStack160;
      goto LAB_7100122948;
    }
    lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_succeeds_bit_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack400,param_3);
      lib::L2CValue::L2CValue(aLStack416,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack416);
      pLVar7 = aLStack400;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_AERIAL);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WAIT);
          lib::L2CValue::L2CValue(aLStack384,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
          lib::L2CValue::~L2CValue(aLStack384);
          pLVar7 = aLStack368;
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack336,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack352,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack352);
          pLVar7 = aLStack336;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_JUMP);
        lib::L2CValue::L2CValue(aLStack320,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::~L2CValue(aLStack320);
        pLVar7 = aLStack304;
      }
    }
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar7 = aLStack176;
LAB_7100122948:
    lib::L2CValue::~L2CValue(pLVar7);
LAB_710012294c:
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100122970:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

