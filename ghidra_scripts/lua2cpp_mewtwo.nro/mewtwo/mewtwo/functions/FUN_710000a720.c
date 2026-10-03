
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a720(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  uVar3 = lib::L2CValue::as_integer(param_3);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    uVar3 = lib::L2CValue::as_integer(param_3);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,aLStack160);
    lib::L2CValue::L2CValue(aLStack112,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack112,pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack176,pLVar6);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::~L2CValue(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack192);
    fVar9 = (float)lib::L2CValue::as_number(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar8);
    lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack304,0x15f14994c6);
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack272,fVar8);
    lib::L2CValue::L2CValue(aLStack96,90.0);
    pLVar6 = aLStack96;
    lib::L2CValue::operator+(aLStack272,pLVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar6);
    uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack256 + 0x10),aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MEWTWO_STATUS_KIND_SPECIAL_HI_3);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(param_1,true);
    }
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if (bVar1) {
      return;
    }
  }
  lib::L2CValue::L2CValue(param_1,false);
  return;
}

