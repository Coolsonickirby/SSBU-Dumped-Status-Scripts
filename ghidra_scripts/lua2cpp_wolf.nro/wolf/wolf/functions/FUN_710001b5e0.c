
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b5e0(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) goto LAB_710001b9f4;
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = aLStack112;
LAB_710001b9e8:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) goto LAB_710001b9f4;
    lib::L2CValue::L2CValue((L2CValue *)auStack272,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),(float)uVar12);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::L2CValue(aLStack112,aLStack240);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
    lib::L2CValue::operator=(aLStack176,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
    lib::L2CValue::operator=(aLStack192,pLVar5);
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0x10c45699a3);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,90.0);
    pLVar5 = aLStack96;
    lib::L2CValue::operator+(aLStack208,pLVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CAgent::math_rad((L2CAgent *)auStack272,pLVar5);
    uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_FOX_STATUS_KIND_SPECIAL_HI_BOUND);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      pLVar5 = aLStack288;
      goto LAB_710001b9e8;
    }
  }
  lib::L2CValue::~L2CValue(aLStack224);
LAB_710001b9f4:
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

