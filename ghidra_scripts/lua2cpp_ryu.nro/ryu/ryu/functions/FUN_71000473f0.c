
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000473f0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    pLVar8 = (L2CValue *)((long)param_2 + 200);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xe);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator+(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x19f6ce20c4);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    uVar5 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_7100047998:
      FUN_7100044530(param_2);
      goto LAB_71000479b4;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6N6);
    lib::L2CValue::operator&(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_4N4);
      lib::L2CValue::operator&(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) goto LAB_7100047998;
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      pLVar8 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar8 = aLStack224;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_RELEASE_BUTTON)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_CHARGE_COUNTER)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__inc_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SAVING_LV);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_SAVING_LV_1);
        uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::~L2CValue(aLStack96);
          pLVar8 = aLStack112;
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_CHARGE_COUNTER);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack176,0xff8990931);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          uVar5 = lib::L2CValue::operator<=(aLStack144,aLStack80);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_71000479b4;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_SAVING_LV_2);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SAVING_LV);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack96);
          pLVar8 = aLStack80;
        }
        goto LAB_71000479b0;
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_RELEASE_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0xe);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator+(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x14fbf0ce78);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    uVar5 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_71000479b4;
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_ATTACK);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar8 = aLStack192;
  }
LAB_71000479b0:
  lib::L2CValue::~L2CValue(pLVar8);
LAB_71000479b4:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

