
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b5630(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    bVar2 = false;
    goto LAB_71000b5988;
  }
  app::WeaponPickelTrolleyLinkEventConfirmMaterial::new_l2c_table();
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xd83483b05);
  lib::L2CValue::operator=(pLVar5,param_3);
  lib::L2CValue::L2CValue
            (aLStack128,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator<(aLStack80,aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xb13bf42af);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator=(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
    FUN_710009d2e0(aLStack80,param_2,aLStack112,aLStack96);
    lib::L2CValue::operator=(aLStack96,aLStack80);
LAB_71000b5914:
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = aLStack112;
LAB_71000b5928:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xb13bf42af);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
    FUN_710009d2e0(aLStack80,param_2,aLStack112,aLStack96);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xaa90cccda);
    lib::L2CValue::operator!(pLVar5);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = aLStack80;
      goto LAB_71000b5928;
    }
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_4);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue
                (aLStack112,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xb13bf42af);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator=(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
      FUN_710009d2e0(aLStack80,param_2,aLStack112,aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      goto LAB_71000b5914;
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xaa90cccda);
  lib::L2CValue::operator!(pLVar5);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::~L2CValue(aLStack96);
    return;
  }
  lib::L2CValue::~L2CValue(aLStack96);
  bVar2 = true;
LAB_71000b5988:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

