
void FUN_7100007e30(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  float *pfVar5;
  L2CTable *this;
  L2CValue *this_00;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(param_1,0.0);
  bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(LUA_SCRIPT_LINE_MAP_CORRECTION);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),false);
  uVar2 = lib::L2CValue::operator==(aLStack112,(L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    pLVar6 = aLStack144;
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x80,SUB81(pLVar6,0));
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pfVar5 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                (LUA_SCRIPT_LINE_MAP_CORRECTION);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),*pfVar5);
    lib::L2CValue::L2CValue(aLStack192,pfVar5[1]);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::operator=(pLVar4,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    this = (L2CTable *)operator.new(0x48);
    lib::L2CTable::L2CTable(this,0);
    lib::L2CValue::L2CValue(aLStack160,this);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),*pfVar5);
    lib::L2CValue::L2CValue(aLStack192,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar5[2]);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::operator=(pLVar4,aLStack192);
    lib::L2CValue::operator=(this_00,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator-(pLVar3,pLVar4);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar3,pLVar4);
    pLVar3 = (L2CValue *)(auStack256 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack224,pLVar3,pLVar6);
    lib::L2CAgent::math_deg((L2CAgent *)auStack256,pLVar3);
    lib::L2CValue::operator=(param_1,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack272,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),-1.0);
    uVar2 = lib::L2CValue::operator==(aLStack272,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator-(param_1);
      lib::L2CValue::operator=(param_1,(L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  return;
}

