
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039600(L2CValue *param_1,undefined8 param_2,L2CValue *param_3,L2CValue *param_4)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  uVar1 = lib::L2CValue::as_integer(param_3);
  uVar1 = app::sv_battle_object::category(uVar1);
  lib::L2CValue::L2CValue(aLStack96,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    uVar1 = lib::L2CValue::as_integer(param_3);
    pvVar3 = (void *)app::sv_battle_object::module_accessor(uVar1);
    if (pvVar3 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar3);
    }
    uVar2 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar2 & 1) == 0) {
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      fVar7 = (float)app::lua_bind::GroundModule__get_width_impl(pBVar6);
      lib::L2CValue::L2CValue(param_1,fVar7);
      goto LAB_7100039860;
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,param_3);
  FUN_7100032ca0(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,param_3);
    lib::L2CValue::L2CValue(aLStack176,param_4);
    FUN_7100036970(aLStack80,param_2,aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x5b4ca7514);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x47a67e768);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x18cdc1683);
    lib::L2CValue::operator-(pLVar4,pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,param_3);
    lib::L2CValue::L2CValue(aLStack144,param_4);
    FUN_7100036050(aLStack80,param_2,aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x5b4ca7514);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x47a67e768);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x18cdc1683);
    lib::L2CValue::operator-(pLVar4,pLVar5);
  }
LAB_7100039860:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

