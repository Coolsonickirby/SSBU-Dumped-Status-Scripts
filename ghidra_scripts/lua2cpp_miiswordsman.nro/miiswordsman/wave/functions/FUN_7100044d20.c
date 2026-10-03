
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044d20(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    fVar3 = (float)app::lua_bind::PostureModule__base_scale_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_SCALE_MUL);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack64,aLStack80);
    lib::L2CValue::operator=(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,aLStack64);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_SCALE_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,fVar3);
    lua2cpp::L2CFighterBase::clamp(param_2,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::operator=(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar3 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::PostureModule__set_scale_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar3,false);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

