
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023180(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  ItemCommonParamInt IVar2;
  int iVar3;
  uint uVar4;
  Item *pIVar5;
  ulong uVar6;
  L2CValue *this;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack176,_ITEM_COMMON_PARAM_INT_HAVE_KIND);
  IVar2 = lib::L2CValue::as_integer(aLStack176);
  pIVar5 = (Item *)lib::L2CValue::as_pointer(param_3);
  iVar3 = app::lua_bind::Item__common_param_int_impl(pIVar5,IVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_ITEM_HAVE_KIND_GET);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),3);
    pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                                (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack176,*pfVar7);
    lib::L2CValue::L2CValue(aLStack160,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar7[2]);
    uVar4 = lib::L2CValue::as_integer(this);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    uVar9 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack144);
    local_60 = CONCAT44(uVar9,uVar8);
    uStack88 = (ulong)uVar10;
    pIVar5 = (Item *)lib::L2CValue::as_pointer(param_3);
    bVar1 = app::lua_bind::Item__send_touch_message_impl(pIVar5,uVar4,(Vector3f *)&local_60,0.0);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  pIVar5 = (Item *)lib::L2CValue::as_pointer(param_3);
  bVar1 = app::lua_bind::ItemModule__use_item_instance_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),pIVar5,false);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

