
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016f20(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined auStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,param_3);
  lib::L2CValue::L2CValue(aLStack160,param_4);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack288,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack288);
  lib::L2CValue::~L2CValue(aLStack288);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack224,GROUND_TOUCH_FLAG_DOWN);
    uVar1 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar1);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),(float)uVar12);
    lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::L2CValue(aLStack112,aLStack192);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xe0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar7 = (L2CValue *)0x1fbdb2615;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    fVar8 = (float)lib::L2CValue::as_number(pLVar2);
    fVar9 = (float)lib::L2CValue::as_number(pLVar4);
    fVar10 = (float)lib::L2CValue::as_number(pLVar5);
    fVar11 = (float)lib::L2CValue::as_number(pLVar6);
    fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar7);
    uVar3 = lib::L2CValue::operator<=(aLStack288,aLStack112);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    if ((uVar3 & 1) != 0) {
      pLVar2 = (L2CValue *)0xffffffa6;
      lib::L2CValue::L2CValue((L2CValue *)auStack240,-0x5a);
      lib::L2CAgent::math_rad((L2CAgent *)auStack240,pLVar2);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack256,fVar8);
      lib::L2CValue::operator*(aLStack288,aLStack256);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      fVar8 = (float)lib::L2CValue::as_number(pLVar5);
      fVar9 = (float)lib::L2CValue::as_number(pLVar6);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
      uVar12 = app::sv_math::vec2_rot(fVar8,fVar9,fVar10);
      lib::L2CValue::L2CValue(aLStack288,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::operator=(pLVar2,aLStack288);
      lib::L2CValue::operator=(pLVar4,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack304,aLStack128);
      lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0xd0);
      lib::L2CValue::operator=(aLStack128,aLStack288);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
      lib::L2CValue::L2CValue(param_1,pLVar2);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
      lib::L2CValue::L2CValue(param_1 + 0x10,pLVar2);
      lib::L2CValue::L2CValue(param_1 + 0x20,true);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      goto LAB_71000173cc;
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack320,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0xc0);
  lib::L2CValue::operator=(aLStack128,aLStack288);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(param_1,pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(param_1 + 0x10,pLVar2);
  lib::L2CValue::L2CValue(param_1 + 0x20,false);
LAB_71000173cc:
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

