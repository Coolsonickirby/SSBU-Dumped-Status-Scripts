
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710009d0c0(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  L2CValue *this;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack80,0x16085cee99);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,HVar2,-1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_SOUND);
  lib::L2CValue::L2CValue(aLStack80,0x1521eac997);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,HVar2,-1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  app::WeaponPickelTrolleyLinkEventRemoveRailByGeneration::new_l2c_table();
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack64,0x5796ac875);
  lib::L2CValue::operator=(this,pLVar3);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_INT_RAIL_GENERATION);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack64,0xb980e6ca0);
  lib::L2CValue::operator=(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_RAIL_LINK_NO_TROLLEY);
  FUN_710009d2e0(aLStack112,param_1,aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

