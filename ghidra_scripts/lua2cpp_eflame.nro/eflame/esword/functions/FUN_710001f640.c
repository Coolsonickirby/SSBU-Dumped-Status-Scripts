
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f640(void *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *this;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  undefined8 uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128);
    uVar13 = app::lua_bind::GroundModule__get_down_pos_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_e0);
    lib::L2CValue::operator=(aLStack128,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue(aLStack272,aLStack96);
    lib::L2CValue::L2CValue(aLStack288,aLStack128);
    FUN_7100020250(auStack176,param_1,aLStack272,aLStack288);
    lib::L2CValue::operator!((L2CValue *)auStack176);
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)&local_e0,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      if ((uVar7 & 1) == 0) {
        uVar13 = app::lua_bind::GroundModule__get_left_pos_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar13);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(aLStack192,aLStack208);
      }
      else {
        uVar13 = app::lua_bind::GroundModule__get_right_pos_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar13);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)&local_e0);
        lib::L2CValue::operator=(aLStack192,aLStack208);
      }
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack304,(L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack320,aLStack192);
      FUN_7100020250(aLStack240,param_1,aLStack304,aLStack320);
      lib::L2CValue::operator!(aLStack240);
      bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
        lib::L2CValue::L2CValue
                  (aLStack240,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
        fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
        iVar5 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar5);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      }
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lVar1 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack176,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(float)uVar13);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::L2CValue(aLStack96,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create
              (param_1,(L2CValue)0x20,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0);
    uVar7 = lib::L2CValue::operator<=(pLVar6,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    if ((uVar7 & 1) != 0) {
      lVar1 = -0x70;
      goto LAB_710001fd44;
    }
    pLVar6 = (L2CValue *)0xffffffa6;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,-0x5a);
    lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar6);
    lib::L2CValue::operator*((L2CValue *)&local_e0,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue(aLStack192);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    fVar9 = (float)lib::L2CValue::as_number(pLVar6);
    fVar10 = (float)lib::L2CValue::as_number(this);
    fVar11 = (float)lib::L2CValue::as_number(aLStack96);
    uVar13 = app::sv_math::vec2_rot(fVar9,fVar10,fVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)&local_e0);
    lib::L2CValue::operator=(aLStack192,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
    fVar12 = (float)lib::L2CValue::as_number(aLStack192);
    fVar9 = (float)app::sv_math::vec2_angle(fVar9,fVar10,fVar11,fVar12);
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::operator*(aLStack240,aLStack112);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
    lib::L2CValue::operator+(aLStack240,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_e0,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
    fVar9 = (float)lib::L2CValue::as_number(aLStack256);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    lVar1 = -0x70;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  pcVar8 = "ground angle_deg: ";
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,"ground angle_deg: ");
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,(L2CValue *)pcVar8);
  lib::L2CValue::operator+((L2CValue *)&local_e0,(L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  fVar9 = (float)app::lua_bind::PostureModule__pos_x_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar9);
  fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::L2CValue(aLStack240,1);
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack176);
  uVar4 = lib::L2CValue::as_number(aLStack192);
  local_e0 = uVar7 & 0xffffffff | (ulong)uVar4 << 0x20;
  uStack216 = 0;
  pcVar8 = (char *)lib::L2CValue::as_string(aLStack128);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  app::sv_debug_draw::draw_text((Vector2f *)&local_e0,pcVar8,iVar5);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lVar1 = -0x50;
LAB_710001fd44:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

