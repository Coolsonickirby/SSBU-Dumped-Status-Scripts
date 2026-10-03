
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006040(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  void *pvVar7;
  Item *pIVar8;
  L2CValue *pLVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar9 = aLStack160;
  lib::L2CValue::L2CValue(param_1,false);
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_LINK);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(param_1,aLStack80);
    pLVar9 = aLStack80;
    goto LAB_71000062fc;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar4 = app::lua_bind::ItemModule__get_have_item_id_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack112,uVar4);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  pvVar7 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                             (FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_CLIFF_POS_Y,uVar4);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar7);
  }
  lib::L2CValue::L2CValue(aLStack144,false);
  uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),3);
    pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack128);
    uVar4 = app::lua_bind::Item__owner_id_impl(pIVar8);
    lib::L2CValue::L2CValue(aLStack80,uVar4);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_71000062c0;
    iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_LINKBOMB);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_71000062dc;
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(param_1,aLStack80);
      goto LAB_71000062d8;
    }
  }
  else {
LAB_71000062c0:
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(param_1,aLStack80);
LAB_71000062d8:
    pLVar9 = aLStack80;
LAB_71000062dc:
    lib::L2CValue::~L2CValue(pLVar9);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar9 = aLStack96;
LAB_71000062fc:
  lib::L2CValue::~L2CValue(pLVar9);
  return;
}

