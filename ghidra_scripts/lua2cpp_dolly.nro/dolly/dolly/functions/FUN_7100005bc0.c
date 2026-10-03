
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005bc0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_INSTANCE_WORK_ID_INT_CAT4_SPECIAL_COMMAND);
  iVar3 = lib::L2CValue::as_integer(pLVar5);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_ENABLE_SUPER_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_COMMAND);
      lib::L2CValue::operator&(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL2);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) goto LAB_7100005db0;
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL2);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::~L2CValue(aLStack144);
        pLVar7 = aLStack128;
LAB_710000610c:
        lib::L2CValue::~L2CValue(pLVar7);
        bVar2 = true;
        goto LAB_7100006124;
      }
LAB_7100005db0:
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_COMMAND);
      lib::L2CValue::operator&(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL);
          lib::L2CValue::L2CValue(aLStack176,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::~L2CValue(aLStack176);
          pLVar7 = aLStack160;
          goto LAB_710000610c;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_R_COMMAND);
      lib::L2CValue::operator&(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL2);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,
                     _FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                                   (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            app::lua_bind::PostureModule__reverse_lr_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          }
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL2);
          lib::L2CValue::L2CValue(aLStack208,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
          lib::L2CValue::~L2CValue(aLStack208);
          pLVar7 = aLStack192;
          goto LAB_710000610c;
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_R_COMMAND);
      lib::L2CValue::operator&(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,
                     _FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                                   (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            app::lua_bind::PostureModule__reverse_lr_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          }
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL);
          lib::L2CValue::L2CValue(aLStack240,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::~L2CValue(aLStack240);
          pLVar7 = aLStack224;
          goto LAB_710000610c;
        }
      }
    }
  }
  bVar2 = false;
LAB_7100006124:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

