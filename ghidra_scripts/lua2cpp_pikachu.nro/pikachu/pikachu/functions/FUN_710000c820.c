
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000c820(void *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined auStack352 [32];
  undefined auStack320 [16];
  undefined auStack304 [32];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0x16f738d149);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue(aLStack128,false);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar9);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar9);
  lib::L2CValue::operator*((L2CValue *)(auStack160 + 0x10),(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::operator*((L2CValue *)auStack160,(L2CValue *)auStack160);
  pLVar8 = aLStack208;
  lib::L2CValue::operator+(aLStack96,pLVar8);
  lib::L2CAgent::math_sqrt((L2CAgent *)auStack352,pLVar8);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0.999);
  pLVar8 = aLStack224;
  lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x40,SUB81(pLVar8,0),(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  uVar5 = lib::L2CValue::operator<(aLStack176,aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
      uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl
                         (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack272,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)auStack352,aLStack272);
      lib::L2CValue::L2CValue(aLStack96,aLStack256);
      pLVar8 = aLStack96;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,SUB81(pLVar8,0));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack96,pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),pLVar7);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack304 + 0x10));
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      fVar9 = (float)app::sv_math::vec2_angle(fVar9,fVar12,fVar10,fVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack320,pLVar7);
      uVar5 = lib::L2CValue::operator<((L2CValue *)auStack304,(L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack352,true);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      }
      bVar1 = app::lua_bind::GroundModule__is_passable_ground_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack352,true);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = aLStack208;
      goto LAB_710000cbfc;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack352,true);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack352);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,true);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack352);
  }
  pLVar7 = (L2CValue *)auStack352;
LAB_710000cbfc:
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::operator=(aLStack208,(L2CValue *)auStack160);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    fVar12 = (float)lib::L2CValue::as_number(aLStack208);
    uVar13 = app::sv_math::vec2_normalize(fVar9,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(float)uVar13);
    pLVar8 = (L2CValue *)(auStack352 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator=(aLStack96,(L2CValue *)auStack352);
    lib::L2CValue::operator=(aLStack208,pLVar8);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
    pLVar7 = aLStack176;
    uVar5 = lib::L2CValue::operator<(aLStack112,pLVar7);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack304,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack304,pLVar7);
      pLVar8 = (L2CValue *)(auStack304 + 0x10);
      lib::L2CValue::operator=((L2CValue *)auStack352,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      pLVar7 = (L2CValue *)auStack304;
    }
    else {
      lib::L2CAgent::math_atan((L2CAgent *)auStack160,(L2CValue *)(auStack160 + 0x10),pLVar8);
      pLVar8 = (L2CValue *)(auStack304 + 0x10);
      lib::L2CValue::operator=((L2CValue *)auStack352,pLVar8);
      pLVar7 = (L2CValue *)(auStack304 + 0x10);
    }
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CAgent::math_cos((L2CAgent *)auStack352,pLVar8);
    pLVar8 = (L2CValue *)(auStack304 + 0x10);
    lib::L2CValue::operator=(aLStack96,pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CAgent::math_sin((L2CAgent *)auStack352,pLVar8);
    lib::L2CValue::operator=(aLStack208,(L2CValue *)(auStack304 + 0x10));
    pLVar8 = (L2CValue *)(auStack304 + 0x10);
  }
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1ae6b40717);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar9);
  lib::L2CValue::operator*(aLStack176,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator=(aLStack176,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1800709950);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar9);
  lib::L2CValue::operator+(aLStack176,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator=(aLStack176,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack304,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,1);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)auStack352,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0x17d4b439f9);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar9);
    lib::L2CValue::operator*(aLStack176,(L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::operator=(aLStack176,(L2CValue *)auStack352);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
    lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  }
  lib::L2CValue::operator*(aLStack96,aLStack176);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::operator*(aLStack208,aLStack176);
  lib::L2CValue::operator=(aLStack208,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
  lib::L2CValue::operator+(aLStack96,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack352,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_X)
  ;
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)(auStack304 + 0x10));
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
  lib::L2CValue::operator+(aLStack208,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack352,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_Y)
  ;
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)(auStack304 + 0x10));
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

