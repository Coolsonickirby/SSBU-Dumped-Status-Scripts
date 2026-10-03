
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020f90(long param_1,undefined8 param_2,L2CValue *param_3)

{
  uint uVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack144 + 0x10),
               _FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_PREV);
    fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&stack0xffffffffffffffc0);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&stack0xffffffffffffffc0,
               _FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    fVar5 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    pLVar3 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),GROUND_TOUCH_FLAG_DOWN);
    uVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
    uVar6 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
    lib::L2CValue::L2CValue(aLStack112,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,aLStack112);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    pLVar3 = aLStack80;
    lib::L2CAgent::math_atan((L2CAgent *)&stack0xffffffffffffffc0,pLVar3,param_3);
    lib::L2CAgent::math_deg((L2CAgent *)auStack144,pLVar3);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack176,fVar5);
    lib::L2CValue::operator-(aLStack176);
    lib::L2CValue::operator*(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack160,fVar5);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_PREV);
    fVar5 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+((L2CValue *)(auStack144 + 0x10),aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    fVar5 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar3 = (L2CValue *)&stack0xffffffffffffffc0;
  }
  lib::L2CValue::~L2CValue(pLVar3);
  return;
}

