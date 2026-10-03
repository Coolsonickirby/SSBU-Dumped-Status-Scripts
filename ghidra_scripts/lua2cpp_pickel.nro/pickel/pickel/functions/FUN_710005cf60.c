
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005cf60(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
    uVar4 = app::FighterSpecializer_Pickel::find_table(pBVar6);
    lib::L2CValue::L2CValue(aLStack96,uVar4);
    uVar5 = lib::L2CValue::operator==(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                        (LUA_SCRIPT_STATUS_FUNC_EXEC_STOP,uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        bVar2 = true;
        goto LAB_710005d0fc;
      }
    }
  }
  bVar2 = false;
LAB_710005d0fc:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

