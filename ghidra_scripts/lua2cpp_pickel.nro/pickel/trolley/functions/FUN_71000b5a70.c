
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b5a70(long param_1,L2CValue *param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::WeaponPickelTrolleyLinkEventConsumeMaterial::new_l2c_table();
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0xd83483b05);
  lib::L2CValue::operator=(pLVar2,param_2);
  lib::L2CValue::L2CValue
            (aLStack112,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0xb13bf42af);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_710009d2e0(aLStack128,param_1,aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

