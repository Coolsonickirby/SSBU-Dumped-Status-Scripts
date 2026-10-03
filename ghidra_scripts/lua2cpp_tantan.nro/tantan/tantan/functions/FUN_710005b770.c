
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005b770(void *param_1)

{
  byte bVar1;
  L2CValue *this;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  app::lua_bind::ControlModule__reset_flick_y_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  app::lua_bind::ControlModule__reset_flick_sub_y_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x1d);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0xfe);
  lib::L2CValue::operator=(this,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  bVar1 = app::lua_bind::GroundModule__pass_floor_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0xc463ffd06);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack80);
  uVar6 = lib::L2CValue::as_number(aLStack96);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  app::lua_bind::KineticModule__add_speed_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_30);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
  lib::L2CValue::L2CValue(aLStack176,false);
  lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

