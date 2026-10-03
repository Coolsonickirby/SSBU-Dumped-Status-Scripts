
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000071b0(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_NUM);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1);
  lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if (-1 < iVar3) {
    iVar9 = 0;
    do {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_TASK_ID);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack176,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10)
      ;
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_90);
      lib::L2CValue::operator=(pLVar7,aLStack256);
      lib::L2CValue::operator=(pLVar8,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack256,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_FLOAT_POS_X);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_FLOAT_POS_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_FLOAT_POS_Z);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
      lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack256);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar12 = lib::L2CValue::as_number(pLVar6);
        lVar13 = lib::L2CValue::as_number(pLVar7);
        uVar11 = lib::L2CValue::as_number(pLVar8);
        local_90 = uVar12 & 0xffffffff | lVar13 << 0x20;
        uStack136 = (ulong)uVar11;
        app::lua_bind::EffectModule__set_pos_impl
                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,
                   (Vector3f *)&local_90);
      }
      lib::L2CValue::L2CValue
                (aLStack272,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_DISP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack256,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
      uVar12 = lib::L2CValue::operator<((L2CValue *)&local_90,aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar12 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,
                   iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_DISP_COUNT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__dec_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  (aLStack272,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_DISP_COUNT);
        iVar4 = lib::L2CValue::as_integer(aLStack272);
        iVar4 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack256,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
        uVar12 = lib::L2CValue::operator==(aLStack256,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((uVar12 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack256,iVar9 + _FIGHTER_MARTH_STATUS_FINAL_WORK_INT_INFO_TASK_ID);
          iVar4 = lib::L2CValue::as_integer(aLStack256);
          iVar4 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
          lib::L2CValue::~L2CValue(aLStack256);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5);
          lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack256);
          lib::L2CValue::~L2CValue(aLStack256);
          if ((bVar2 & 1U) != 0) {
            uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            app::lua_bind::EffectModule__remove_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,0);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        }
      }
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      bVar2 = iVar9 < iVar3;
      iVar9 = iVar9 + 1;
    } while (bVar2);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

