
void FUN_71000270f0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  ulong uVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CAgent *this_03;
  L2CValue *pLVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::operator-(param_5);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(BATTLE_OBJECT_CATEGORY_ITEM);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack272,false);
  uVar2 = lib::L2CValue::operator==(aLStack112,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    pfVar3 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                (BATTLE_OBJECT_CATEGORY_ITEM);
    lib::L2CValue::L2CValue(aLStack208,*pfVar3);
    lib::L2CValue::L2CValue(aLStack192,pfVar3[1]);
    lib::L2CValue::L2CValue(aLStack272,aLStack208);
    lib::L2CValue::L2CValue(aLStack112,aLStack192);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xf0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    lib::L2CValue::operator-(param_3,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::operator-(param_4,pLVar4);
    pLVar4 = aLStack240;
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x20,SUB81(pLVar4,0));
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    this_03 = (L2CAgent *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_03,pLVar5,pLVar4);
    lib::L2CValue::operator-(aLStack304);
    fVar6 = (float)lib::L2CValue::as_number(this_01);
    fVar7 = (float)lib::L2CValue::as_number(this_02);
    fVar8 = (float)lib::L2CValue::as_number(aLStack288);
    uVar9 = app::sv_math::vec2_rot(fVar6,fVar7,fVar8);
    lib::L2CValue::L2CValue(aLStack272,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::operator=(this,aLStack272);
    lib::L2CValue::operator=(this_00,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(param_1,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(param_1 + 0x10,pLVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

