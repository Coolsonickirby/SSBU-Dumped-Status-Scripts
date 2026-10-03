
void FUN_710002e4d0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3)

{
  L2CValue *pLVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  int iVar6;
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [16];
  L2CValue *local_68;
  L2CValue *local_60;
  
  lib::L2CAgent::pairs(param_1,param_3);
  pLVar1 = local_60;
  if (local_68 != local_60) {
    pLVar5 = local_68;
    do {
      lib::L2CValue::L2CValue(aLStack136,pLVar5);
      lib::L2CValue::L2CValue(aLStack120,pLVar5 + 0x10);
      lib::L2CValue::L2CValue(aLStack152,aLStack136);
      lib::L2CValue::L2CValue(aLStack168,aLStack120);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
      uVar4 = lib::L2CValue::operator==(aLStack168,pLVar3);
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar4 & 1) != 0) {
        iVar6 = 1;
        iVar2 = 1;
        pLVar1 = local_68;
        goto joined_r0x00710002e5c0;
      }
      pLVar5 = pLVar5 + 0x20;
    } while (pLVar5 != pLVar1);
  }
  iVar6 = 2;
  iVar2 = 2;
  pLVar1 = local_68;
joined_r0x00710002e5c0:
  local_68 = pLVar1;
  if (pLVar1 != (L2CValue *)0x0) {
    while (local_60 != pLVar1) {
      pLVar5 = local_60 + -0x10;
      local_60 = local_60 + -0x20;
      lib::L2CValue::~L2CValue(pLVar5);
      lib::L2CValue::~L2CValue(local_60);
    }
    operator.delete(local_68);
    iVar2 = iVar6;
  }
  if (iVar2 == 2) {
    iVar2 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::ArticleModule__remove_exist_impl(param_1->moduleAccessor,iVar2,0);
  }
  return;
}

