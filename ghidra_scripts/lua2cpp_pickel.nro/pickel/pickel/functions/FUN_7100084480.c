
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100084480(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
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
  
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
LAB_71000847c0:
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_HI3);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
LAB_7100084880:
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::operator==(param_3,aLStack112);
      uVar6 = uVar6 & 0xffffffff;
      lib::L2CValue::~L2CValue(aLStack112);
      if (bVar2) goto LAB_71000848a8;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator==(aLStack224,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      bVar2 = true;
      uVar6 = 1;
      if ((uVar5 & 1) == 0) goto LAB_7100084880;
LAB_71000848a8:
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator&(pLVar4,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack320);
          iVar3 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          uVar5 = lib::L2CValue::operator<(aLStack112,aLStack144);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack352,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
              lib::L2CValue::~L2CValue(aLStack352);
              pLVar7 = aLStack336;
              goto LAB_7100084c28;
            }
          }
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator&(pLVar7,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack320);
          iVar3 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          uVar5 = lib::L2CValue::operator<(aLStack112,aLStack144);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack368,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_JUMP_AERIAL);
            lib::L2CValue::L2CValue(aLStack384,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
            lib::L2CValue::~L2CValue(aLStack384);
            pLVar7 = aLStack368;
            goto LAB_7100084c28;
          }
        }
      }
    }
    bVar2 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_SPEED_Y_STABLE_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack224,0x13c30c93f0);
        lib::L2CValue::L2CValue(aLStack240,0);
        uVar5 = lib::L2CValue::as_integer(aLStack224);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        uVar5 = lib::L2CValue::operator<(aLStack112,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_LANDING_LIGHT);
          lib::L2CValue::L2CValue(aLStack272,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::~L2CValue(aLStack272);
          pLVar7 = aLStack256;
          goto LAB_7100084c28;
        }
      }
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_71000847c0;
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_LANDING);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      pLVar7 = aLStack288;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI_ENABLE_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_LANDING);
        lib::L2CValue::L2CValue(aLStack208,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::~L2CValue(aLStack208);
        pLVar7 = aLStack192;
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::~L2CValue(aLStack176);
        pLVar7 = aLStack160;
      }
    }
LAB_7100084c28:
    lib::L2CValue::~L2CValue(pLVar7);
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

