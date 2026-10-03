
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d160(long param_1)

{
  uint uVar1;
  ItemKind IVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  lib::L2CValue::L2CValue(aLStack64,_ITEM_KIND_BANANA);
  uVar1 = lib::L2CValue::as_integer(pLVar4);
  IVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = app::lua_bind::ItemManager__get_num_of_ownered_item_impl
                    (FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_UP_Z,uVar1,IVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x195db90925);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar5 = lib::L2CValue::operator<(aLStack80,aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar4 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_INTERVAL_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_710001d30c;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_PUTOUT_CONDITION_OK);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    pLVar4 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar4);
LAB_710001d30c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

