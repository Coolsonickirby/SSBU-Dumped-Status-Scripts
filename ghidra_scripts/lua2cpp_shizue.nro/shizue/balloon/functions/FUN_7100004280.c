
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004280(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined auStack240 [32];
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
    bVar2 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    bVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pfVar5 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                  (LUA_SCRIPT_LINE_SYSTEM_POST);
      lib::L2CValue::L2CValue(aLStack176,*pfVar5);
      lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
      lib::L2CValue::L2CValue(aLStack80,aLStack176);
      lib::L2CValue::L2CValue(aLStack96,aLStack160);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      uVar10 = app::lua_bind::PostureModule__pos_2d_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(float)uVar10);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar10 >> 0x20));
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::L2CValue(aLStack96,aLStack208);
      pLVar8 = aLStack96;
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,SUB81(pLVar8,0));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
      lib::L2CValue::operator-(pLVar6,pLVar7);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar6,pLVar7);
      pLVar6 = aLStack256;
      lib::L2CAgent::math_atan((L2CAgent *)auStack240,pLVar6,pLVar8);
      lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar6);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLOAT_TOP_ANGLE);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLAG_SINGLE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      FUN_7100003c00(param_2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,0.9);
      FUN_7100003950(param_2,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

