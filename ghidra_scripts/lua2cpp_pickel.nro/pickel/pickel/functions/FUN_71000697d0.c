
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000697d0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
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
LAB_71000699fc:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
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
        if ((uVar5 & 1) != 0) {
          bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_JUMP_AERIAL);
            lib::L2CValue::L2CValue(aLStack240,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
            lib::L2CValue::~L2CValue(aLStack240);
            pLVar7 = aLStack224;
            goto LAB_7100069d14;
          }
        }
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
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
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::~L2CValue(aLStack272);
          pLVar7 = aLStack256;
          goto LAB_7100069d14;
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
LAB_7100069974:
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_71000699fc;
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_LANDING);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar7 = aLStack192;
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
      if ((uVar5 & 1) == 0) goto LAB_7100069974;
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_LANDING_LIGHT);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      pLVar7 = aLStack160;
    }
LAB_7100069d14:
    lib::L2CValue::~L2CValue(pLVar7);
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

