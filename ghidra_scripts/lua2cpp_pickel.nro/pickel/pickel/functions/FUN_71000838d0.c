
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000838d0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this;
  Fighter *pFVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI_ENABLE_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
  lib::L2CValue::L2CValue(aLStack64,false);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(this);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::FighterSpecializer_Pickel::set_interpolate_move_attack_joint(pFVar4,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  FUN_71000833b0(param_1);
  return;
}

