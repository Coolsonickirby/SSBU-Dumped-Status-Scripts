
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100036050(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  app::Rhombus2::new_l2c_table();
  uVar2 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    uVar2 = lib::L2CValue::as_integer(param_3);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar5);
    }
    uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      uVar12 = app::lua_bind::PostureModule__pos_2d_impl(pBVar6);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::operator=(aLStack112,aLStack160);
      lib::L2CValue::operator=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar6,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar9);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::operator*(aLStack160,(L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack224,0xba12fa217);
      lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0x58c1a452f);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::operator*(aLStack160,(L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack160,true);
      uVar4 = lib::L2CValue::operator==(param_4,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,0);
        uVar4 = lib::L2CValue::as_integer(aLStack288);
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
        pLVar8 = (L2CValue *)(uVar4 & 0xffffffff);
        fVar9 = (float)app::lua_bind::PostureModule__rot_x_impl(pBVar6,(int)pLVar8);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar9);
        lib::L2CAgent::math_abs((L2CAgent *)auStack272,pLVar8);
        lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar8);
        lib::L2CValue::operator-((L2CValue *)(auStack256 + 0x10));
        fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
        fVar11 = (float)lib::L2CValue::as_number(aLStack224);
        uVar12 = app::sv_math::vec2_rot(fVar9,fVar10,fVar11);
        lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack208,aLStack160);
        pLVar8 = aLStack144;
        lib::L2CValue::operator=((L2CValue *)auStack192,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar8);
        pLVar8 = aLStack160;
        lib::L2CValue::operator=((L2CValue *)auStack208,pLVar8);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
        lib::L2CValue::operator=((L2CValue *)auStack192,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
      }
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator+(aLStack112,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x24394ee70);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)auStack192);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x24394ee70);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar8,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator+(aLStack112,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x41cff903b);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator+(aLStack128,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x41cff903b);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack160,0.5);
      lib::L2CValue::operator*((L2CValue *)auStack208,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator-(aLStack112,(L2CValue *)(auStack256 + 0x10));
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x47a67e768);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::L2CValue(aLStack160,0.5);
      lib::L2CValue::operator*((L2CValue *)auStack192,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)(auStack256 + 0x10));
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x47a67e768);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::L2CValue(aLStack160,0.5);
      lib::L2CValue::operator*((L2CValue *)auStack208,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator+(aLStack112,(L2CValue *)(auStack256 + 0x10));
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x5b4ca7514);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::L2CValue(aLStack160,0.5);
      lib::L2CValue::operator*((L2CValue *)auStack192,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)(auStack256 + 0x10));
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](param_1,0x5b4ca7514);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar8,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack208);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

