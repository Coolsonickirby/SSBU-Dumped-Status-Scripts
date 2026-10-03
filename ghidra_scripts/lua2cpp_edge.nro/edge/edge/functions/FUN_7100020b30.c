
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020b30(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this;
  float fVar9;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  uVar2 = app::lua_bind::CatchModule__capture_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_EFFECT_HANDLE_NULL);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = app::sv_battle_object::category(uVar2);
  lib::L2CValue::L2CValue(aLStack128,uVar2 & 0xff);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0x15164b620c);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack240,param_2);
    lib::L2CValue::L2CValue(aLStack256,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack272,aLStack80);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    FUN_7100020fa0(aLStack128,param_1,aLStack240,aLStack256,aLStack272,aLStack288);
    lib::L2CValue::operator=(aLStack112,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    this = aLStack240;
  }
  else {
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar6);
    }
    lib::L2CValue::L2CValue(aLStack144,0xc28b70a0b);
    lib::L2CValue::L2CValue(aLStack160,0);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack176,param_2);
    lib::L2CValue::L2CValue(aLStack192,0xde223373b);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,aLStack128);
    FUN_7100020fa0(aLStack144,param_1,aLStack176,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::operator=(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    this = aLStack128;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(param_3);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

