
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020080(undefined8 param_1,void *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar2);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack160);
  fVar3 = (float)lib::L2CValue::as_number(aLStack176);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  uVar5 = app::sv_math::vec2_rot(fVar2,fVar3,fVar4);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

